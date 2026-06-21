// addr: 0x0140d560
// name: CWCard_validateCommandObjectPreconditions
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CWCard_validateCommandObjectPreconditions(void * this, void * trace, void
   * commands) */

bool __thiscall CWCard_validateCommandObjectPreconditions(void *this,void *trace,void *commands)

{
  undefined4 *puVar1;
  char cVar2;
  void *card;
  int iVar3;
  void *pvVar4;
  char *formatText;
  int *piVar5;
  undefined4 *puVar6;
  undefined1 auStack_a0 [148];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Iterates command objects and checks each command's preconditions. Destroy
                       commands receive special handling that removes a dead-key property when
                       appropriate; validation stops on the first failed precondition. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0169212b;
  local_c = ExceptionList;
  card = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffff4c);
  ExceptionList = &local_c;
  Game_logGeneral(*(void **)((int)this + 0x30),"CWCard::validateCommandObjectPreconditions",card);
  puVar1 = *(undefined4 **)((int)commands + 8);
  if (puVar1 < *(undefined4 **)((int)commands + 4)) {
    FUN_00d83c2d();
  }
  puVar6 = *(undefined4 **)((int)commands + 4);
  if (*(undefined4 **)((int)commands + 8) < puVar6) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (commands == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (puVar6 == puVar1) {
      ExceptionList = local_c;
      return true;
    }
    if (commands == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)((int)commands + 8) <= puVar6) {
      FUN_00d83c2d();
    }
    piVar5 = (int *)*puVar6;
    cVar2 = (**(code **)(*piVar5 + 0x68))(trace);
    iVar3 = FUN_00d8d382(piVar5,0,&CommandObject::RTTI_Type_Descriptor,
                         &CWCommandObject_Destroy::RTTI_Type_Descriptor,0);
    if (iVar3 != 0) {
      EvaluationEnvironment_tracef(trace,"Found destroy.",card);
      EvaluationEnvironment_ctor();
      uStack_4 = 0;
      (**(code **)(*piVar5 + 0x70))(auStack_a0);
      pvVar4 = EvaluationEnvironment_getTargetCard(auStack_a0);
      if (pvVar4 != (void *)0x0) {
        formatText = EvaluationEnvironment_getTargetCard(auStack_a0);
        EvaluationEnvironment_logCardMessage(trace,"CWCard::removing deadkey.",formatText,card);
        piVar5 = EvaluationEnvironment_getTargetCard(auStack_a0);
        (**(code **)(*piVar5 + 0x18))(0x199);
      }
      uStack_4 = 0xffffffff;
      FUN_01385460();
    }
    if (cVar2 == '\0') break;
    if (*(undefined4 **)((int)commands + 8) <= puVar6) {
      FUN_00d83c2d();
    }
    puVar6 = puVar6 + 1;
  }
  ExceptionList = local_c;
  return false;
}

