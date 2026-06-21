// addr: 0x01386ae0
// name: EvaluationEnvironment_create
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 EvaluationEnvironment_create(void)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs an EvaluationEnvironment object, returning null on
                       allocation failure. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168337b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  local_10 = Mem_Alloc(0x94);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = EvaluationEnvironment_ctor(uVar1);
  }
  ExceptionList = local_c;
  return uVar2;
}

