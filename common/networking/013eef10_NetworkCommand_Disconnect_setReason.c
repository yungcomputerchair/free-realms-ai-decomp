// addr: 0x013eef10
// name: NetworkCommand_Disconnect_setReason
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_Disconnect_setReason(void * this, char * reason) */

void __thiscall NetworkCommand_Disconnect_setReason(void *this,char *reason)

{
  char cVar1;
  char *pcVar2;
  
                    /* Assigns a C string into the NetworkCommand_Disconnect string member at offset
                       4. Evidence: called from NetworkService disconnect construction and same
                       offset is cloned by NetworkCommand_Disconnect_cloneInto. */
  pcVar2 = reason;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 4),
             reason,(int)pcVar2 - (int)(reason + 1));
  return;
}

