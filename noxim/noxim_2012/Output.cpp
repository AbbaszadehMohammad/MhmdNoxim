/*****************************************************************************

  Output.cpp -- Create output result

 *****************************************************************************/

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <vector>
#include "Output.h"
#include "NoximDefs.h"
#include <string>
#include <cstring>
#include <iomanip>


//------------------------------------------------------------------------------

void Output::WriteOutputsToFile(bool golden,unsigned int ReceivedPackets,unsigned int ReceivedFlits,double AveDelay,double AveThroughput,double Throughput,double MaxDelay,double Power)
{


	fstream pFileG1("GTotalRecievedPacket.txt",ios::out | ios::in);
	fstream pFileG2("GTotalRecievedFlits.txt",ios::out| ios::in);
	fstream pFileG3("GgetAverageDelay.txt",ios::out| ios::in);
	fstream pFileG4("GgetAverageThroughput.txt",ios::out| ios::in);
	fstream pFileG5("GgetThroughput.txt",ios::out| ios::in);
	fstream pFileG6("GgetMaxDelay.txt",ios::out| ios::in);
	fstream pFileG7("GgetPower.txt",ios::out| ios::in);
		
	    pFileG1.seekg (0, ios::end);
		pFileG1 << fixed   <<ReceivedPackets << "-" <<endl;	
		//
		pFileG2.seekg (0, ios::end);
		pFileG2 << fixed   << ReceivedFlits << "-" << endl;
		//
		pFileG3.seekg (0, ios::end);
		pFileG3 << std::setprecision(10) << fixed   << AveDelay << "-" << endl;
		//
		pFileG4.seekg (0, ios::end);
		pFileG4 << std::setprecision(10) << fixed   << AveThroughput << "-" << endl;
		//
		pFileG5.seekg (0, ios::end);
		pFileG5 << std::setprecision(10) << fixed   << Throughput << "-" << endl;
		//
		pFileG6.seekg (0, ios::end);
		pFileG6 << fixed   << MaxDelay << "-" << endl;
		//
		pFileG7.seekg (0, ios::end);
		pFileG7 << std::setprecision(10) << fixed   << Power << "-" << endl;
		//

	pFileG1.close();
	pFileG2.close();
	pFileG3.close();
	pFileG4.close();
	pFileG5.close();
	pFileG6.close();
	pFileG7.close();

}
