#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

struct Process {
    int pid;
    int arrival_time;
    int burst_time;
};

bool compare(Process a, Process b) {
    return a.burst_time < b.burst_time;
}

int main() {
    int n;
    cout << "Enter the number of processes: ";
    cin >> n;

    vector<Process> processes(n);
    int Completion_Time[n],Turn_Around_Time[n],Waiting_Time[n];
    

    for(int i=0; i<n; i++) {
        cout << "Enter arrival time for process " << i+1 << ": ";
        cin >> processes[i].arrival_time;
        cout << "Enter burst time for process " << i+1 << ": ";
        cin >> processes[i].burst_time;
    }
    for(int i=0;i<n;i++){
        if(i==0){
            Completion_Time[i] = processes[i].burst_time;
            Turn_Around_Time[i] = Completion_Time[i];
            Waiting_Time[i] = Turn_Around_Time[i] - processes[i].burst_time;
        }
        else if(i>0){
            sort(processes.begin()+1, processes.end(), compare);
            Completion_Time[i] = Completion_Time[i-1]+processes[i].burst_time;
            Turn_Around_Time[i] = Completion_Time[i] - processes[i].arrival_time;
            Waiting_Time[i] = Turn_Around_Time[i] - processes[i].burst_time;
        }
    }
    int current_time = 0;
    float total_waiting_time = 0;
    float total_turnaround_time = 0;
    cout<<"Process\t Arrival Time\t Burst Time\t Completion Time\t Waiting Time\t Turnaround Time"<<endl;
    for(int i=0;i<n;i++){
        total_waiting_time += Waiting_Time[i];
        total_turnaround_time += Turn_Around_Time[i];
        cout<<processes[i].pid+1<<"\t\t "<<processes[i].arrival_time<<"\t\t "<<processes[i].burst_time<<"\t\t "<<Completion_Time[i]<<"\t\t "<<Turn_Around_Time[i]<<"\t\t "<<Waiting_Time[i]<<endl;
    }
    // sort the processes by their burst times
    // cout << "\nProcess execution order: ";
    // calculate and print the average waiting time and average turnaround time
    float avg_waiting_time = total_waiting_time / n;
    float avg_turnaround_time = total_turnaround_time / n;

    cout << "\n\nAverage Waiting Time: " << avg_waiting_time;
    cout << "\nAverage Turnaround Time: " << avg_turnaround_time;

    return 0;
}
