// addr: 0x00a4c330
// name: OverHeadNameIconElement_ctor
// subsystem: common/client/effects
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
OverHeadNameIconElement_ctor
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined1 param_6)

{
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
                    /* Constructs/initializes the object. Evidence:
                       OverHeadNameIconElement::vftable. */
  local_14 = 0xffffffff;
  puStack_18 = &LAB_015b5328;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  local_30 = _DAT_01cb53d0;
  uStack_2c = uRam01cb53d4;
  uStack_28 = uRam01cb53d8;
  uStack_24 = uRam01cb53dc;
  local_3c = 0;
  local_38 = 1;
  local_34 = param_1;
  FUN_00a4c260(&param_2,param_3,&local_38,&local_3c,&param_4,&local_30,&param_5);
  *param_1 = OverHeadNameIconElement::vftable;
  *(undefined1 *)(param_1 + 0x24) = param_6;
  ExceptionList = local_1c;
  return param_1;
}

