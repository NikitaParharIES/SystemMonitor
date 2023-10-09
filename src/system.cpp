#include <unistd.h>
#include <cstddef>
#include <set>
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include "linux_parser.h"
#include "process.h"
#include "processor.h"
#include "system.h"

using std::set;
using std::size_t;
using std::string;
using std::vector;
/*You need to complete the mentioned TODOs in order to satisfy the rubric criteria "The student will be able to extract and display basic data about the system."

You need to properly format the uptime. Refer to the comments mentioned in format. cpp for formatting the uptime.*/

// TODO: Return the system's CPU
Processor& System::Cpu() { 
    //Kernel();
    //OperatingSystem();
    cpu_=Processor();
    return cpu_;
    // return LinuxParser::CpuUtilization();
 }

// TODO: Return a container composed of the system's processes
vector<Process>& System::Processes() { 
    vector<int> pids = LinuxParser::Pids();
    //Process::_pids = pids;
    for(int _pid: pids){
       processes_.emplace_back(_pid);

    }
    return processes_;
}

// TODO: Return the system's kernel identifier (string)
std::string System::Kernel() { ;
    return LinuxParser::Kernel();
    }

// TODO: Return the system's memory utilization
// Total used memory = MemTotal - MemFree
float System::MemoryUtilization() { 
    return LinuxParser::MemoryUtilization();
    //return 1.23;

 }

// TODO: Return the operating system name
std::string System::OperatingSystem() { 
    return LinuxParser::OperatingSystem();  
}

// TODO: Return the number of processes actively running on the system
int System::RunningProcesses() {
    return LinuxParser::RunningProcesses();
    //return LinuxParser::MemoryUtilization();
 }


// TODO: Return the total number of processes on the system
int System::TotalProcesses() { 
    //return 0; 
    return LinuxParser::TotalProcesses();
}

// TODO: Return the number of seconds since the system started running
long int System::UpTime() { 
    return LinuxParser::UpTime();
    // long int time;
    // time = Process().UpTime();
    // return time;
    //return 5;
    // long int time;
    // string uptime, idleTime;
    // string line;
    // std::ifstream stream(LinuxParser::kProcDirectory + LinuxParser::kUptimeFilename);
    // if (stream.is_open()) {
    //     std::getline(stream, line);
    //     std::istringstream linestream(line);
    //     while(linestream >> uptime >> idleTime){
            
    //         time = std::stol(uptime);}
    //     }
       
    // return time;

    }
