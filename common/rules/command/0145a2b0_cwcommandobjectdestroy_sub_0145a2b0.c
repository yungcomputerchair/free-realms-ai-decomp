// addr: 0x0145a2b0
// name: cwcommandobjectdestroy_sub_0145a2b0
// subsystem: common/rules/command
// source (binary assert): common/rules/command/cwcommandobjectdestroy.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: undefined4 cwcommandobjectdestroy_sub_0145a2b0(int param_1_) */

undefined4 __fastcall cwcommandobjectdestroy_sub_0145a2b0(int param_1_)

{
  void *card;
  void *pvVar1;
  int *piVar2;
  undefined4 extraout_EAX;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  TypeDescriptor *pTVar6;
  TypeDescriptor *pTVar7;
  undefined4 uVar8;
  void *local_418;
  undefined1 auStack_414 [4];
  void *pvStack_410;
  undefined4 uStack_400;
  uint uStack_3fc;
  char acStack_3f8 [1000];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Is a class method with behavior inferred from its code shape. Evidence:
                       __FILE__ path ..\\common\\rules\\command\\cwcommandobjectdestroy.cpp; strings
                       player, CWCommandObject_Destroy::doCommand:. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169c839;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_418;
  card = (void *)(DAT_01b839d8 ^ (uint)&stack0xfffffbd8);
  ExceptionList = &local_c;
  uVar8 = 0;
  pTVar7 = &CWCard::RTTI_Type_Descriptor;
  pTVar6 = &PlayElement::RTTI_Type_Descriptor;
  pvVar3 = (void *)(param_1_ + 0x84);
  uVar5 = 0;
  pvVar1 = EvaluationEnvironment_resolveTarget(pvVar3);
  piVar2 = (int *)FUN_00d8d382(pvVar1,uVar5,pTVar6,pTVar7,uVar8);
  EvaluationEnvironment_logCardMessage
            (pvVar3,"CWCommandObject_Destroy::doCommand: ",(char *)piVar2,card);
  uVar5 = extraout_EAX;
  if (piVar2 != (int *)0x0) {
    local_418 = Mem_Alloc(0x140);
    local_4 = 0;
    if (local_418 == (void *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = CommandObjectDiscard_ctorDefaultInit(local_418,pvVar3,1);
    }
    local_4 = 0xffffffff;
    CommandObjectVector_pushBack(pvVar3,card);
    iVar4 = (**(code **)(*piVar2 + 0x28))();
    pvVar3 = (void *)FUN_01340340();
    pvVar3 = PlayArea_findPlayerElementById(pvVar3,iVar4);
    if (pvVar3 == (void *)0x0) {
      FUN_012f5a60("player","..\\common\\rules\\command\\cwcommandobjectdestroy.cpp",0x62);
    }
    pvVar3 = Game_copyCommandObjectList(pvVar3,auStack_414);
    local_4 = 1;
    Card_getPropertyMap();
    if (*(uint *)((int)pvVar3 + 0x18) < 0x10) {
      iVar4 = (int)pvVar3 + 4;
    }
    else {
      iVar4 = *(int *)((int)pvVar3 + 4);
    }
    _sprintf(acStack_3f8,"%s\'s %s is destroyed.",iVar4);
    local_4 = 0xffffffff;
    if (0xf < uStack_3fc) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_410);
    }
    uStack_3fc = 0xf;
    uStack_400 = 0;
    pvStack_410 = (void *)((uint)pvStack_410 & 0xffffff00);
    piVar2 = (int *)FUN_01340340();
    uVar5 = (**(code **)(*piVar2 + 0x198))(piVar2,0,acStack_3f8);
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar5 >> 8),1);
}

