// addr: 0x014eb960
// name: CommandObject_AccountLookup_doCommand
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CommandObject_AccountLookup_doCommand(void * this) */

bool __fastcall CommandObject_AccountLookup_doCommand(void *this)

{
  void *map;
  int key_;
  
                    /* Ensures the lobby account singleton/map entry for the account id at +8 and
                       then processes the string/value field at +0xc. */
  LobbyAccount_ensureSingleton();
  LobbyServiceAccountMap_findValue(map,key_);
  FUN_013a8b70((int)this + 0xc);
  return true;
}

