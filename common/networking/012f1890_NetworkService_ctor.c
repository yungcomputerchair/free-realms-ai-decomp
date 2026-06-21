// addr: 0x012f1890
// name: NetworkService_ctor
// subsystem: common/networking
// source (binary assert): common/networking/NetworkService.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void * NetworkService_ctor(void * this) */

void * __fastcall NetworkService_ctor(void *this)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this_00;
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar5;
  void *local_1a4;
  undefined1 auStack_1a0 [396];
  void *pvStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs NetworkService, initializes host strings, ports, socket state, and
                       calls WSAStartup. Evidence: NetworkService vftable assignment plus
                       NetworkService.cpp asserts for default/gateway host and port. */
  puStack_8 = &LAB_01673fdc;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_1a4;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xfffffe4c;
  ExceptionList = &local_c;
  this_00 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 4);
  *(undefined ***)this = NetworkService::vftable;
  *(undefined4 *)((int)this + 0x1c) = 0xf;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x38) = 0xf;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined1 *)((int)this + 0x24) = 0;
  local_4 = 1;
  *(int *)((int)this + 0x3c) = DAT_01cbd968;
  *(int *)((int)this + 0x40) = DAT_01cbd968;
  *(undefined1 *)((int)this + 0x4d) = 1;
  local_1a4 = this;
  if ((DAT_01bb94b4 == 0) && (DAT_01bb94d0 == 0)) {
    FUN_012f5a60("(false == NetworkService::sDefaultHost.empty()) || (false == NetworkService::sGatewayHost.empty())"
                 ,"..\\common\\networking\\NetworkService.cpp",0x77,uVar2);
  }
  if ((DAT_01cbd968 == 0) && (DAT_01cbd96c == 0)) {
    FUN_012f5a60("(0 != NetworkService::sDefaultPort) || (0 != NetworkService::sGatewayPort)",
                 "..\\common\\networking\\NetworkService.cpp",0x78,uVar2);
  }
  if (*(char *)((int)this + 0x4d) == '\0') {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (this_00,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        *)&DAT_01bb94a0,0,0xffffffff);
    pbVar5 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &DAT_01bb94a0;
  }
  else {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (this_00,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        *)&DAT_01bb94bc,0,0xffffffff);
    pbVar5 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &DAT_01bb94bc;
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x20),
             pbVar5,0,0xffffffff);
  *(undefined1 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  if (DAT_01cbd974 != 0) {
    if (DAT_01cbd978 == '\0') {
      *(int *)((int)this + 0x3c) = DAT_01cbd974;
    }
    else {
      *(int *)((int)this + 0x40) = DAT_01cbd974;
    }
  }
  if (DAT_01cbd978 == '\x01') {
    pcVar3 = DAT_01cbd980;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (this_00,DAT_01cbd980,(int)pcVar3 - (int)(DAT_01cbd980 + 1));
    *(uint *)((int)this + 0x3c) = (uint)DAT_01cbd984;
  }
  NetworkService_setConnectionState(this,0);
  *(undefined4 *)((int)this + 0x44) = 0xffffffff;
  *(undefined4 *)((int)this + 0x48) = 0;
  iVar4 = Ordinal_115(0x101,auStack_1a0);
  if (iVar4 == -1) {
    FUN_012f5a60("false","..\\common\\networking\\NetworkService.cpp",0xa7);
  }
  ExceptionList = pvStack_14;
  return this;
}

