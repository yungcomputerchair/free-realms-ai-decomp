// addr: 0x013ee930
// name: GatewayCommand_GetConnectionServer_setSecondaryHost
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GatewayCommand_GetConnectionServer_setSecondaryHost(void * this, void *
   host) */

void __thiscall GatewayCommand_GetConnectionServer_setSecondaryHost(void *this,void *host)

{
                    /* Copies a string into the second string member at offset 0x20 of
                       GatewayCommand_GetConnectionServer. It is paired with the offset-4 setter in
                       NetworkService setup. */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x20),
             host,0,0xffffffff);
  return;
}

