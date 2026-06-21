// addr: 0x0088bfc0
// name: FUN_0088bfc0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void FUN_0088bfc0(void) */

void FUN_0088bfc0(void)

{
  void *pvVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
                    /* Allocates and constructs a global default object in DAT_01be46d4 from a zero
                       vector and scale 1.0. Specific type is not identified. */
  local_14 = 0xffffffff;
  puStack_18 = &LAB_01578beb;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  pvVar1 = Mem_Alloc(0xc);
  local_14 = 0;
  if (pvVar1 == (void *)0x0) {
    DAT_01be46d4 = 0;
  }
  else {
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = _DAT_0175b420;
    DAT_01be46d4 = FUN_00892560(&local_30,0x3f800000);
  }
  ExceptionList = local_1c;
  return;
}

