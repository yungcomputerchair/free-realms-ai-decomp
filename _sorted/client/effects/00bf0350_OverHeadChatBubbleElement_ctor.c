// addr: 0x00bf0350
// name: OverHeadChatBubbleElement_ctor
// subsystem: common/client/effects
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
OverHeadChatBubbleElement_ctor
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 *param_5,undefined4 *param_6,undefined4 param_7,undefined4 param_8,
          undefined4 *param_9)

{
  uint uVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs/initializes the object. Evidence:
                       OverHeadChatBubbleElement::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015f1e61;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  local_18 = DAT_017ed93c;
  local_14 = 4;
  local_10 = param_1;
  OverHeadElement_sub_00957850(&local_14,param_3,param_7,param_4,param_8,&local_18);
  local_4 = 0;
  *param_1 = OverHeadChatBubbleElement::vftable;
  FUN_008dff60(param_2);
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[0x61] = *param_9;
  param_1[0x62] = *param_5;
  param_1[99] = 0;
  param_1[100] = 0xdac;
  FUN_00bf02b0(uVar1);
  param_1[0xbe] = *param_6;
  param_1[0xdc] = 0x14;
  ExceptionList = local_c;
  return param_1;
}

