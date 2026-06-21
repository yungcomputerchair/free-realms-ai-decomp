// addr: 0x007ae0e0
// name: FUN_007ae0e0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_007ae0e0(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and initializes a 0x1c-byte transform/record with id -1, two
                       identity/default values, and zeroed pointers. Exact class is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0155dbeb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = Mem_Alloc(0x1c);
  uVar1 = _DAT_0175b420;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0xffffffff;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = uVar1;
    puVar2[4] = uVar1;
    puVar2[5] = 0;
    puVar2[6] = 0;
  }
  ExceptionList = local_c;
  return puVar2;
}

