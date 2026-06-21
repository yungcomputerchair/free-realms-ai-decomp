// addr: 0x01387b70
// name: EvaluationEnvironment_setPlayElementReturn
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EvaluationEnvironment_setPlayElementReturn(void * this, int key_, void *
   element) */

void EvaluationEnvironment_setPlayElementReturn(void *this,int key_,void *element)

{
  char cVar1;
  uint key__00;
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Sets a return-map entry to a PlayElement id, with extra handling for an
                       existing target value. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01683500;
  local_c = ExceptionList;
  key__00 = DAT_01b839d8 ^ (uint)&stack0xffffffd4;
  ExceptionList = &local_c;
  if (this != (void *)0x0) {
    FUN_012fa910();
    local_4 = 0;
    cVar1 = FUN_013833c0(0xe,local_24);
    if (cVar1 == '\0') {
      FUN_012fa910();
      local_4._0_1_ = 1;
      this = (void *)PlayElement_getId();
      FUN_01300680(6);
      FUN_0042c155(&this);
      this = &DAT_0000000e;
      EvaluationEnvironment_getOrCreateReturnValue(&this,key__00);
      FUN_013010e0(local_18);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_01300cd0();
    }
    else {
      FUN_01300db0();
      this = (void *)PlayElement_getId();
      FUN_01300680(6);
      FUN_0042c155(&this);
      this = &DAT_0000000e;
      EvaluationEnvironment_getOrCreateReturnValue(&this,key__00);
      FUN_013010e0(local_24);
    }
    local_4 = 0xffffffff;
    FUN_01300cd0();
  }
  ExceptionList = local_c;
  return;
}

