// addr: 0x01395560
// name: Card_evaluatePreventBy
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Card_evaluatePreventBy(void * card, int actionId_, void * env) */

bool __fastcall Card_evaluatePreventBy(void *card,int actionId_,void *env)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int *serializer;
  int extraout_EAX;
  void *unaff_EBX;
  void *in_stack_00000008;
  undefined1 auStack_1c [8];
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Evaluates PreventBy command-object preconditions for a card action and logs
                       evaluation/precondition failures. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01684638;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  serializer = Card_getActionByID(card,actionId_);
  PropertySerializer_writeCompositeValueE(serializer);
  if (extraout_EAX != 0) {
    EvaluationEnvironment_setActionReturn(serializer);
    CommandObjectVector_clear(in_stack_00000008);
    cVar1 = (**(code **)(*(int *)card + 0xb0))(serializer,in_stack_00000008);
    if (cVar1 != '\0') {
      EvaluationEnvironment_addCommandObjectChecked(auStack_1c);
      uStack_4 = 0;
      cVar1 = (**(code **)(*(int *)card + 500))(in_stack_00000008,auStack_1c);
      if (cVar1 == '\0') {
        Game_logGeneralFormatted
                  (*(undefined4 *)((int)card + 0x30),
                   "command object preconditions failed for PreventBy.");
        local_c = (void *)0xffffffff;
        if (unaff_EBX != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(unaff_EBX);
        }
        bVar2 = false;
      }
      else {
        CommandObjectVector_clear(in_stack_00000008);
        local_c = (void *)0xffffffff;
        if (unaff_EBX != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(unaff_EBX);
        }
        bVar2 = true;
      }
      ExceptionList = pvStack_14;
      return bVar2;
    }
    Game_logGeneral(*(void **)((int)card + 0x30),"preventby evaluation failed.",uVar3);
  }
  ExceptionList = local_c;
  return false;
}

