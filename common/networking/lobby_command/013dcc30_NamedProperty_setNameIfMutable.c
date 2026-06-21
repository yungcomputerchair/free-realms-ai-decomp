// addr: 0x013dcc30
// name: NamedProperty_setNameIfMutable
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NamedProperty_setNameIfMutable(void * param_1, void * param_2) */

void __thiscall NamedProperty_setNameIfMutable(void *this,void *param_1,void *param_2)

{
  bool bVar1;
  
                    /* Assigns a string/name into the object only when an associated pointer exists
                       and that associated object is not marked immutable/locked. It then marks a
                       local dirty/has-name byte at +9. */
  if (*(void **)((int)this + 0xc) != (void *)0x0) {
    bVar1 = NamedProperty_isNameMutable(*(void **)((int)this + 0xc));
    if (!bVar1) {
      Deck_setName(*(void **)((int)this + 0xc),param_1);
      *(undefined1 *)((int)this + 9) = 1;
    }
  }
  return;
}

