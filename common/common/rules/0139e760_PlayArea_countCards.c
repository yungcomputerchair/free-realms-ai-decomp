// addr: 0x0139e760
// name: PlayArea_countCards
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool PlayArea_countCards(void * this, void * env, void * outValue, void *
   trace) */

bool __thiscall PlayArea_countCards(void *this,void *env,void *outValue,void *trace)

{
  undefined1 uVar1;
  void *unaff_ESI;
  undefined4 unaff_retaddr;
  undefined4 *_Memory;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Evaluates a play-area card count expression: it emits the trace text
                       'Counting cards in a playarea' and then dispatches through a vtable slot on
                       the play-area object at this+0x30. */
  puStack_8 = &LAB_01685528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  _Memory = &local_1c;
  (**(code **)(*(int *)this + 0x34))(_Memory,DAT_01b839d8 ^ (uint)&stack0xffffffd8);
  EvaluationEnvironment_countTracef(trace,"Counting cards in a playarea",_Memory);
  uVar1 = (**(code **)(**(int **)((int)this + 0x30) + 0x188))
                    (&stack0xffffffe0,unaff_retaddr,env,outValue,trace);
  local_1c = 0xffffffff;
  if (_Memory != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  ExceptionList = unaff_ESI;
  return (bool)uVar1;
}

