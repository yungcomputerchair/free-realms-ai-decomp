// addr: 0x01493c20
// name: QueryPlayabilityNode_evaluate
// subsystem: common/common/node
// source (binary assert): common/common/node/QueryPlayabilityNode.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool QueryPlayabilityNode_evaluate(void * this, void * outValue, void *
   environment) */

bool __thiscall QueryPlayabilityNode_evaluate(void *this,void *outValue,void *environment)

{
  int iVar1;
  char cVar2;
  void *card;
  int *formatText;
  char *formatText_00;
  undefined4 uVar3;
  void *pvVar4;
  int *piVar5;
  undefined1 local_a0 [148];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Evaluates whether target1 can be played on target2 by resolving both target
                       cards, setting up a temporary environment, and asking the player/precondition
                       logic. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a244b;
  local_c = ExceptionList;
  card = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffff4c);
  ExceptionList = &local_c;
  EvaluationEnvironment_traceEnterf(environment,"( QueryPlayabilityNode",card);
  formatText = QueryContainerNode_getTargetCard(this,*(int *)((int)this + 0x1c),environment);
  if (formatText != (int *)0x0) {
    EvaluationEnvironment_logCardMessage(environment,"QPNe Target1 card: ",(char *)formatText,card);
    formatText_00 = QueryContainerNode_getTargetCard(this,*(int *)((int)this + 0x20),environment);
    if (formatText_00 != (char *)0x0) {
      EvaluationEnvironment_logCardMessage(environment,"QPNe Target2 card: ",formatText_00,card);
      EvaluationEnvironment_tracef
                (environment,"QPNe checking Target1 Preconditions to see if Target2 is valid",card);
      EvaluationEnvironment_ctor();
      local_4 = 0;
      EvaluationEnvironment_copyFrom(local_a0,environment,card);
      set_play_element_id_field(local_a0,formatText);
      EvaluationEnvironment_setCurrentTargetFromElement(local_a0,formatText_00,card);
      EvaluationEnvironment_setPlayElementId(0);
      uVar3 = (**(code **)(*formatText + 0xcc))();
      EvaluationEnvironment_setActionReturn(uVar3);
      EvaluationEnvironment_setBooleanKey9(1);
      EvaluationEnvironment_setBooleanKey4(0);
      set_boolean_value_key_17(true);
      pvVar4 = EvaluationEnvironment_getMember14(environment);
      if (pvVar4 == (void *)0x0) {
        FUN_012f5a60("environment->getPlayer()","..\\common\\common\\node\\QueryPlayabilityNode.cpp"
                     ,0x124);
      }
      piVar5 = EvaluationEnvironment_getMember14(environment);
      iVar1 = *piVar5;
      (**(code **)(*formatText + 0xcc))(local_a0);
      uVar3 = FUN_01321f20();
      cVar2 = (**(code **)(iVar1 + 0x58))(formatText,uVar3);
      if (cVar2 != '\0') {
        EvaluationEnvironment_tracef(environment,"QPNe target1 can be played on target2",card);
        EvaluationEnvironment_logCardMessage(environment,"QPNe target1: ",(char *)formatText,card);
        EvaluationEnvironment_logCardMessage(environment,"QPNe target2: ",formatText_00,card);
        EvaluationEnvironment_traceExitf(environment,") => true",card);
        FUN_01300680(1);
        *(undefined1 *)((int)outValue + 8) = 1;
        local_4 = 0xffffffff;
        FUN_01385460();
        ExceptionList = local_c;
        return true;
      }
      EvaluationEnvironment_tracef
                (environment,"QPNe target1 is not a valid target for target2",card);
      EvaluationEnvironment_logCardMessage(environment,"QPNe target1: ",(char *)formatText,card);
      EvaluationEnvironment_logCardMessage(environment,"QPNe target2: ",formatText_00,card);
      EvaluationEnvironment_traceExitf(environment,") => false",card);
      local_4 = 0xffffffff;
      FUN_01385460();
    }
  }
  ExceptionList = local_c;
  return false;
}

