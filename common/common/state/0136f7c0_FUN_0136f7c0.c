// addr: 0x0136f7c0
// name: FUN_0136f7c0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall FUN_0136f7c0(void *param_1,int param_2)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  int elementId_;
  void *local_3fc;
  undefined1 *puStack_3f8;
  undefined4 local_3f4;
  undefined1 local_3f0 [1000];
  uint local_8;
  
                    /* Generic container/game/deserializer helper with insufficient class evidence;
                       code performs tree/vector manipulation, value serialization, or broad game
                       utility work rather than a clearly named state method. */
  local_3f4 = 0xffffffff;
  puStack_3f8 = &LAB_016809d3;
  local_3fc = ExceptionList;
  local_8 = DAT_01b839d8 ^ (uint)local_3f0;
  ExceptionList = &local_3fc;
  piVar1 = PlayArea_findPlayerElementById(param_1,param_2);
  pvVar2 = find_play_element_in_maps(param_1,elementId_);
  iVar3 = FUN_00d8d382(pvVar2,0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0);
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    local_3f4 = 0;
    uVar4 = (**(code **)(*piVar1 + 0x48))(iVar3);
  }
  ExceptionList = local_3fc;
  return uVar4;
}

