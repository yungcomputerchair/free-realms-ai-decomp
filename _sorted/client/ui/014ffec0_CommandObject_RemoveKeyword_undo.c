// addr: 0x014ffec0
// name: CommandObject_RemoveKeyword_undo
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CommandObject_RemoveKeyword_undo(void * this) */

bool __fastcall CommandObject_RemoveKeyword_undo(void *this)

{
  int *piVar1;
  undefined4 unaff_ESI;
  
                    /* Undo method for CommandObject_RemoveKeyword: casts the stored PlayElement to
                       Card, logs an error if unavailable, otherwise calls the Card vfunc at +0x1b0
                       with the saved keyword data at this+0x124. The assert/log string names the
                       method. */
  piVar1 = (int *)FUN_00d8d382(*(undefined4 *)((int)this + 0x68),0,
                               &PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0);
  if (piVar1 == (int *)0x0) {
    Game_logGeneral(*(void **)((int)this + 0x30),
                    "Couldn\'t get card in CommandObject_RemoveKeyword.undo",unaff_ESI);
    return false;
  }
  (**(code **)(*piVar1 + 0x1b0))((int)this + 0x124);
  return true;
}

