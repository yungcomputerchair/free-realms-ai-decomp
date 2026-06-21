// addr: 0x012f1e00
// name: NetworkService_startConnection
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: int NetworkService_startConnection(void * this) */

int __fastcall NetworkService_startConnection(void *this)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  void *this_00;
  undefined4 *puVar5;
  int iVar6;
  void **ppvVar7;
  void **extraout_EAX;
  void **extraout_EAX_00;
  void **extraout_EAX_01;
  undefined4 auStack_90 [2];
  undefined1 local_88 [20];
  undefined1 local_74 [100];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Begins or advances a NetworkService connection attempt: selects host/port,
                       optionally sends GatewayCommand_GetConnectionServer payload, resolves host
                       overrides, starts nonblocking connect, transitions to proxy/connected states,
                       and queues RequestData on success. Evidence: uses LoginService host
                       overrides, GetConnectionServer command, host accessors, socket connect
                       helper, and state transitions. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167405e;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)auStack_90;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffff60;
  ppvVar7 = &local_c;
  if ((*(int *)((int)this + 0x5c) < 1) && (*(int *)((int)this + 100) < 1)) goto LAB_012f20fd;
  ExceptionList = ppvVar7;
  if (DAT_01cbd978 == '\x01') {
    pcVar3 = DAT_01cbd980;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 4),
               DAT_01cbd980,(int)pcVar3 - (int)(DAT_01cbd980 + 1));
    uVar4 = (uint)DAT_01cbd984;
LAB_012f1f7e:
    *(uint *)((int)this + 0x3c) = uVar4;
  }
  else {
    if (*(char *)((int)this + 0x4d) == '\0') {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 4),
                 (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 ((int)this + 0x20),0,0xffffffff);
      uVar4 = *(uint *)((int)this + 0x40);
      goto LAB_012f1f7e;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 4),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               &DAT_01bb94bc,0,0xffffffff);
    *(undefined4 *)((int)this + 0x3c) = DAT_01cbd96c;
    LoginService_getInstance();
    GatewayCommand_GetConnectionServer_ctor(local_74);
    local_4 = 0;
    pcVar3 = NetworkService_getDefaultHostString(this_00);
    GatewayCommand_GetConnectionServer_setPrimaryHost(local_74,pcVar3);
    pcVar3 = NetworkService_getGatewayHostString(this_00);
    GatewayCommand_GetConnectionServer_setSecondaryHost(local_74,pcVar3);
    PacketBuffer_init(local_88);
    local_4._0_1_ = 1;
    FUN_013ee5e0(local_88);
    uVar4 = PacketBuffer_getSize(local_88);
    auStack_90[0] = Ordinal_8(uVar4);
    NetworkService_appendBuffer((char **)((int)this + 0x58),(int *)((int)this + 0x5c),auStack_90,4);
    puVar5 = PacketBuffer_identity(local_88);
    NetworkService_appendBuffer
              ((char **)((int)this + 0x58),(int *)((int)this + 0x5c),(void *)*puVar5,uVar4);
    local_4 = (uint)local_4._1_3_ << 8;
    RawBuffer_free(local_88);
    local_4 = 0xffffffff;
    GatewayCommand_GetConnectionServer_dtor(local_74);
  }
  if (*(char *)((int)this + 0x4c) == '\0') {
    LoginService_loadHostSvrOverrides(this);
    if (DAT_01cbd978 == '\x01') {
      pcVar3 = DAT_01cbd980;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 4),
                 DAT_01cbd980,(int)pcVar3 - (int)(DAT_01cbd980 + 1));
      *(uint *)((int)this + 0x3c) = (uint)DAT_01cbd984;
    }
    else if (*(char *)((int)this + 0x4d) == '\0') {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 4),
                 (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 ((int)this + 0x20),0,0xffffffff);
      *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)((int)this + 0x40);
    }
    if (*(uint *)((int)this + 0x1c) < 0x10) {
      iVar6 = (int)this + 8;
    }
    else {
      iVar6 = *(int *)((int)this + 8);
    }
    iVar6 = Ordinal_52(iVar6);
    *(int *)((int)this + 0x48) = iVar6;
    if (iVar6 == 0) {
      NetworkService_setConnectionState(this,7);
      if (DAT_01cbd978 == '\x01') {
        iVar6 = NetworkService_postConnectionError(this,0xb);
        ExceptionList = local_c;
        return iVar6;
      }
      iVar6 = NetworkService_postConnectionError(this,5);
      ExceptionList = local_c;
      return iVar6;
    }
    *(undefined1 *)((int)this + 0x4c) = 1;
  }
  ppvVar7 = (void **)FUN_012f0820(uVar2);
  if (ppvVar7 == (void **)0xffffffff) {
    iVar6 = 7;
  }
  else {
    if (ppvVar7 != (void **)0x0) {
      if (ppvVar7 == (void **)0x1) {
        if (DAT_01cbd978 == '\x01') {
          NetworkService_setConnectionState(this,6);
          *(undefined4 *)((int)this + 0x70) = 1;
          ppvVar7 = extraout_EAX;
        }
        else {
          iVar6 = *(int *)((int)this + 0x68);
          *(undefined4 *)((int)this + 0x68) = 5;
          if (*(void **)((int)this + 0x60) != (void *)0x0) {
            NetworkService_appendBuffer
                      ((char **)((int)this + 0x58),(int *)((int)this + 0x5c),
                       *(void **)((int)this + 0x60),*(uint *)((int)this + 100));
                    /* WARNING: Subroutine does not return */
            _free(*(void **)((int)this + 0x60));
          }
          *(undefined4 *)((int)this + 100) = 0;
          ppvVar7 = (void **)0x0;
          if (iVar6 != 5) {
            NetworkCommand_RequestData_ctor(auStack_90);
            local_4 = 2;
            NetworkError_setCode(auStack_90,0x9f3);
            NetworkService_queueCommand(this,auStack_90);
            local_4 = 0xffffffff;
            NetworkCommand_RequestData_dtor(auStack_90);
            ppvVar7 = extraout_EAX_00;
          }
        }
      }
      goto LAB_012f20fd;
    }
    iVar6 = 4;
  }
  NetworkService_setConnectionState(this,iVar6);
  ppvVar7 = extraout_EAX_01;
LAB_012f20fd:
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)ppvVar7 >> 8),1);
}

