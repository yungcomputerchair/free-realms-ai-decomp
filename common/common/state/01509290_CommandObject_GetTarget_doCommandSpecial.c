// addr: 0x01509290
// name: CommandObject_GetTarget_doCommandSpecial
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CommandObject_GetTarget_doCommandSpecial(void * this) */

bool __fastcall CommandObject_GetTarget_doCommandSpecial(void *this)

{
  void *this_00;
  bool value_;
  
                    /* If field +0x124 equals 0x1018, retrieves current turn and calls a helper with
                       1; always returns true. Exact special-case meaning is unclear. */
  if (*(int *)((int)this + 0x124) == 0x1018) {
    value_ = true;
    this_00 = Game_getCurrentTurn(*(void **)((int)this + 0x30));
    set_flag_54(this_00,value_);
  }
  return true;
}

