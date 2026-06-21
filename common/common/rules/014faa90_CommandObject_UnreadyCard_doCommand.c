// addr: 0x014faa90
// name: CommandObject_UnreadyCard_doCommand
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CommandObject_UnreadyCard_doCommand(void * this, void * env) */

bool __thiscall CommandObject_UnreadyCard_doCommand(void *this,void *env)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
                    /* Casts the stored target PlayElement to Card and invokes a card virtual to
                       unready it; logs when the card is already unready. */
  if (*(int *)((int)this + 0x68) != 0) {
    piVar1 = (int *)FUN_00d8d382(*(int *)((int)this + 0x68),0,&PlayElement::RTTI_Type_Descriptor,
                                 &Card::RTTI_Type_Descriptor,0);
    if (piVar1 != (int *)0x0) {
      uVar3 = 0x309;
      iVar2 = (**(code **)(*piVar1 + 0x15c))(0x309,env);
      if (iVar2 == 0) {
        EvaluationEnvironment_tracef(env,"Card is already unready!",uVar3);
        return false;
      }
      return true;
    }
  }
  return false;
}

