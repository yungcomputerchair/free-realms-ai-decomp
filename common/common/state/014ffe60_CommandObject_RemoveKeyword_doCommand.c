// addr: 0x014ffe60
// name: CommandObject_RemoveKeyword_doCommand
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CommandObject_RemoveKeyword_doCommand(void * this) */

bool __fastcall CommandObject_RemoveKeyword_doCommand(void *this)

{
  int *piVar1;
  undefined4 unaff_ESI;
  
                    /* Casts field +0x68 to Card, logs if null, otherwise invokes the card virtual
                       method with keyword data at +0x124. */
  piVar1 = (int *)FUN_00d8d382(*(undefined4 *)((int)this + 0x68),0,
                               &PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0);
  if (piVar1 == (int *)0x0) {
    Game_logGeneral(*(void **)((int)this + 0x30),"CARD IS NULL IIN COMMANDOBJECT_REMOVEKEYWORD!!",
                    unaff_ESI);
    return false;
  }
  (**(code **)(*piVar1 + 0x1b8))((int)this + 0x124);
  return true;
}

