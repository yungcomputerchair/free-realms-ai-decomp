// addr: 0x007d89e0
// name: FUN_007d89e0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_007d89e0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
                    /* Ensures a 0x20-byte record exists at an index, then initializes it with zero
                       fields and a default 4-float/color vector from globals. No class evidence, so
                       left unnamed. */
  local_14 = 0xffffffff;
  puStack_18 = &LAB_01562331;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  puVar4 = (undefined4 *)FUN_007d7eb0(param_1);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = 0;
    puVar4[1] = 0;
    uVar3 = uRam01cb53dc;
    uVar2 = uRam01cb53d8;
    uVar1 = uRam01cb53d4;
    puVar4[4] = _DAT_01cb53d0;
    puVar4[5] = uVar1;
    puVar4[6] = uVar2;
    puVar4[7] = uVar3;
  }
  ExceptionList = local_1c;
  return puVar4;
}

