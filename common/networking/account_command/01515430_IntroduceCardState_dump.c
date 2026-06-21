// addr: 0x01515430
// name: IntroduceCardState_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void IntroduceCardState_dump(int * param_1, void * param_2) */

void __thiscall IntroduceCardState_dump(void *this,int *param_1,void *param_2)

{
  int *stream;
  
                    /* Emits a textual/debug dump for IntroduceCardState, creating/opening a writer
                       when needed and wrapping the card-state dump between Starting/Ending markers.
                        */
  if (param_1 == (int *)0x0) {
    param_1 = (int *)0x151544b;
    stream = (int *)(**(code **)(*(int *)this + 4))();
  }
  else {
    stream = (int *)(**(code **)(*(int *)this + 8))();
  }
  DebugStream_writeCString(stream,"Starting IntroduceCardState\n");
  CancellableStateMachineState_serialize(this,stream,(int)param_1);
  DebugStream_writeCString(stream,"Ending IntroduceCardState\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

