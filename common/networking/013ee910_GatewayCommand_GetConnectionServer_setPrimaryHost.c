// addr: 0x013ee910
// name: GatewayCommand_GetConnectionServer_setPrimaryHost
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GatewayCommand_GetConnectionServer_setPrimaryHost(void * this, void *
   host) */

void __thiscall GatewayCommand_GetConnectionServer_setPrimaryHost(void *this,void *host)

{
                    /* Copies a string into the first string member at offset 4 of
                       GatewayCommand_GetConnectionServer. It is called while NetworkService builds
                       a get-connection-server command. */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 4),host
             ,0,0xffffffff);
  return;
}

