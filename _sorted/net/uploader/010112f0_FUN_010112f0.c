// addr: 0x010112f0
// name: FUN_010112f0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_010112f0(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x68-byte file/helper object, calls an initialization/open helper
                       with flags 0 and 1, stores the object on success, and returns 0 or -2. Lacks
                       class-identifying evidence. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01633ccb;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  pvVar3 = Mem_Alloc(0x68);
  local_4 = 0;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_007039b0(uVar2);
  }
  local_4 = 0xffffffff;
  cVar1 = FUN_00703e10(param_2,0,1);
  if (cVar1 == '\0') {
    ExceptionList = local_c;
    return 0xfffffffe;
  }
  *param_1 = uVar4;
  ExceptionList = local_c;
  return 0;
}

