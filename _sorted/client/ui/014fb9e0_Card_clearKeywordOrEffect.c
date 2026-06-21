// addr: 0x014fb9e0
// name: Card_clearKeywordOrEffect
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Card_clearKeywordOrEffect(void * this) */

bool __fastcall Card_clearKeywordOrEffect(void *this)

{
  void *id;
  
                    /* Casts the PlayElement at this+0x68 to Card, calls a card helper on it, and
                       returns true. Exact card operation is not named in this context. */
  id = (void *)FUN_00d8d382(*(undefined4 *)((int)this + 0x68),0,&PlayElement::RTTI_Type_Descriptor,
                            &Card::RTTI_Type_Descriptor,0);
  Card_removePlayElementId(*(void **)((int)this + 0x30),id);
  return true;
}

