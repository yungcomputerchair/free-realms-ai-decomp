// addr: 0x012f2330
// name: NetworkService_useDefaultEndpoint
// subsystem: common/networking
// source (binary assert): common/networking/NetworkService.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkService_useDefaultEndpoint(void * this) */

void __fastcall NetworkService_useDefaultEndpoint(void *this)

{
                    /* Switches NetworkService to the default host/port, clears gateway/connection
                       flags, validates configured defaults, and restarts connection handling.
                       Evidence: NetworkService.cpp asserts require sDefaultHost and sDefaultPort
                       and the function assigns default host/port members. */
  *(undefined1 *)((int)this + 0x4d) = 0;
  *(undefined1 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  NetworkService_closeSocket(this,false);
  if (DAT_01bb94b4 == 0) {
    FUN_012f5a60("false == NetworkService::sDefaultHost.empty()",
                 "..\\common\\networking\\NetworkService.cpp",0x128);
  }
  if (DAT_01cbd968 == 0) {
    FUN_012f5a60("0 != NetworkService::sDefaultPort","..\\common\\networking\\NetworkService.cpp",
                 0x129);
  }
  if (DAT_01bb94b4 != 0) {
    if (DAT_01cbd978 == '\0') {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 4),
                 (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &DAT_01bb94a0,0,0xffffffff);
      *(int *)((int)this + 0x3c) = DAT_01cbd968;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x20)
               ,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                &DAT_01bb94a0,0,0xffffffff);
    *(int *)((int)this + 0x40) = DAT_01cbd968;
  }
  NetworkService_startConnection(this);
  return;
}

