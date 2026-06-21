// addr: 0x0145aa20
// name: CWCommandObject_AddCostMod_create
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int CWCommandObject_AddCostMod_create(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a CWCommandObject_AddCostMod, returning the
                       command-object subobject pointer or null on allocation failure. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169c99b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  local_10 = Mem_Alloc(0x144);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = CWCommandObject_AddCostMod_ctor(uVar1);
  }
  if (iVar2 != 0) {
    ExceptionList = local_c;
    return iVar2 + 8;
  }
  ExceptionList = local_c;
  return 0;
}

