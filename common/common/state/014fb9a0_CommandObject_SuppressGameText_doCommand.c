// addr: 0x014fb9a0
// name: CommandObject_SuppressGameText_doCommand
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CommandObject_SuppressGameText_doCommand(void * this) */

bool __fastcall CommandObject_SuppressGameText_doCommand(void *this)

{
  void *card;
  undefined4 unaff_ESI;
  
                    /* Logs CommandObject_SuppressGameText::doCommand, casts target to Card, and
                       suppresses that card's game text. */
  Game_logGeneral(*(void **)((int)this + 0x30),"CommandObject_SuppressGameText::doCommand",unaff_ESI
                 );
  card = (void *)FUN_00d8d382(*(undefined4 *)((int)this + 0x68),0,&PlayElement::RTTI_Type_Descriptor
                              ,&Card::RTTI_Type_Descriptor,0);
  Game_suppressGameTextForCard(*(void **)((int)this + 0x30),card);
  return true;
}

