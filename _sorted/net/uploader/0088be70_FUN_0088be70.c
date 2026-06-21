// addr: 0x0088be70
// name: FUN_0088be70
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void FUN_0088be70(void) */

void FUN_0088be70(void)

{
  void *pvVar1;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
                    /* Allocates and constructs a global default object in DAT_01be46d0 from several
                       zero/default vector-like local values. Specific DeepParticle type is not
                       identified. */
  local_14 = 0xffffffff;
  puStack_18 = &LAB_01578bbb;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  pvVar1 = Mem_Alloc(0xc);
  local_14 = 0;
  if (pvVar1 == (void *)0x0) {
    DAT_01be46d0 = 0;
  }
  else {
    local_60 = 0;
    local_5c = 0;
    local_54 = 0;
    local_50 = 0;
    local_48 = 0;
    local_44 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_58 = DAT_017649d4;
    local_4c = DAT_017649d4;
    local_40 = DAT_017649d4;
    local_30 = DAT_017649d4;
    local_2c = DAT_017649d4;
    local_28 = DAT_017649d4;
    local_24 = _DAT_0175b420;
    DAT_01be46d0 = FUN_008926a0(&local_30,&local_40,&local_50,&local_60);
  }
  ExceptionList = local_1c;
  return;
}

