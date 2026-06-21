// addr: 0x013b30b0
// name: LobbyCommand_Join_setJoinString
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_Join_setJoinString(void * this, void * value) */

void __thiscall LobbyCommand_Join_setJoinString(void *this,void *value)

{
                    /* Assigns a caller-provided std::string into a string field of
                       LobbyCommand_Join. The exact semantic field is not evident here, but it is a
                       Join-command setter used by nearby lobby command construction/deserialization
                       paths. */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x10),
             value,0,0xffffffff);
  return;
}

