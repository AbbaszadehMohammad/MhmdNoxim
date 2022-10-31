/*****************************************************************************

  TInjection.h -- Statistics definition

 *****************************************************************************/
#ifndef __OUTPUT_H__
#define __OUTPUT_H__

//---------------------------------------------------------------------------
#include <vector>
#include "NoximDefs.h"
#include <iostream>
#include <fstream>


using namespace std;

//----------------------------------------------------------------------------

class Output
{

public:

  Output(){}
  void WriteOutputsToFile(bool golden,unsigned int ReceivedPackets,unsigned int ReceivedFlits,double AveDelay,double AveThroughput,double Throughput,double MaxDelay,double Power);
  //void CalAverage();
  //void CalMean();

};


#endif












