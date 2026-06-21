// addr: 0x0144e700
// name: CWMultiActionState_getCommandObjectList
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
CWMultiActionState_getCommandObjectList
          (void *param_1,void *param_2,undefined4 param_3,void *param_4)

{
  uint uVar1;
  void *game;
  int *piVar2;
  undefined4 extraout_EAX;
  char *fmt;
  void *local_2c [5];
  uint uStack_18;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Gets the command-object list for a CWMultiActionState after resolving origin
                       card and delegating to MultiActionState_getCommandObjectList. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0169b228;
  local_c = ExceptionList;
  local_10 = (void *)(DAT_01b839d8 ^ (uint)local_2c);
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffc4;
  ExceptionList = &local_c;
  fmt = "CWMultiActionState::getCommandObjectList";
  game = (void *)StateMachineState_getGame();
  Game_logGeneral(game,fmt,uVar1);
  FUN_00d8d382(*(undefined4 *)((int)param_1 + 0x128),0,&PlayElement::RTTI_Type_Descriptor,
               &Card::RTTI_Type_Descriptor,0);
  piVar2 = EvaluationEnvironment_getOriginCard(param_4);
  (**(code **)(*piVar2 + 0x108))(local_2c);
  puStack_8 = (undefined1 *)0x0;
  MultiActionState_getCommandObjectList(param_1,param_2);
  puStack_8 = (undefined1 *)0xffffffff;
  if (0xf < uStack_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  ExceptionList = local_10;
  return extraout_EAX;
}

