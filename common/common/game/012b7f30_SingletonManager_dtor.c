// addr: 0x012b7f30
// name: SingletonManager_dtor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall SingletonManager_dtor(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys the singleton manager by tearing down several member containers and
                       helper objects in exception-safe order. Evidence is callers named
                       SingletonManager_scalarDeletingDtor and SingletonManager_destroyInstance. */
  puStack_8 = &LAB_0166d724;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 4;
  FUN_012b7430(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  local_4._0_1_ = 3;
  FUN_0129d560();
  local_4 = CONCAT31(local_4._1_3_,2);
  StdRbTree_destroyAndFree((void *)(param_1 + 0x24));
  FUN_0129d5d0();
  FUN_012b77a0();
  FUN_012b7ec0();
  ExceptionList = puStack_8;
  return;
}

