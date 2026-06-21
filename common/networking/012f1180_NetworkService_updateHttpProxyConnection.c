// addr: 0x012f1180
// name: NetworkService_updateHttpProxyConnection
// subsystem: common/networking
// source (binary assert): common/networking/NetworkService.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int NetworkService_updateHttpProxyConnection(void * this) */

int __fastcall NetworkService_updateHttpProxyConnection(void *this)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int extraout_EAX;
  char *pcVar5;
  void *data;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Drives an alternate proxy connection handshake, resolving/building a request
                       with proxy credentials and waiting for a response byte before marking
                       connected or reporting errors. Evidence: NetworkService.cpp, socket
                       readiness/read/write helpers, and use of proxy credential globals with a
                       different state path than the SOCKS5 handler. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01673f70;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_01cbd978 == '\0') {
    iVar3 = *(int *)((int)this + 0x68);
    *(undefined4 *)((int)this + 0x68) = 5;
    if (*(void **)((int)this + 0x60) != (void *)0x0) {
      NetworkService_appendBuffer
                ((char **)((int)this + 0x58),(int *)((int)this + 0x5c),*(void **)((int)this + 0x60),
                 *(uint *)((int)this + 100));
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 0x60));
    }
    *(undefined4 *)((int)this + 100) = 0;
    iVar4 = 0;
    if (iVar3 == 5) goto LAB_012f13e8;
    NetworkCommand_RequestData_ctor(local_14);
    local_4 = 0;
    NetworkError_setCode(local_14,0x9f3);
LAB_012f1302:
    NetworkService_queueCommand(this,local_14);
    local_4 = 0xffffffff;
    NetworkCommand_RequestData_dtor(local_14);
    iVar4 = extraout_EAX;
  }
  else {
    iVar4 = *(int *)((int)this + 0x70);
    if (0 < iVar4) {
      if (iVar4 < 3) {
        if (*(uint *)((int)this + 0x38) < 0x10) {
          iVar4 = (int)this + 0x24;
        }
        else {
          iVar4 = *(int *)((int)this + 0x24);
        }
        iVar4 = Ordinal_52(iVar4,DAT_01b839d8 ^ (uint)&stack0xffffffdc);
        if (iVar4 == 0) {
          NetworkService_closeSocket(this,true);
          NetworkService_setConnectionState(this,7);
          iVar4 = NetworkService_postConnectionError(this,5);
          ExceptionList = local_c;
          return iVar4;
        }
        pcVar1 = DAT_01cbd988 + 1;
        pcVar5 = DAT_01cbd988;
        do {
          cVar2 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar2 != '\0');
        data = _malloc((size_t)(pcVar5 + (9 - (int)pcVar1)));
        NetworkService_buildProxyConnectPacket(*(ushort *)((int)this + 0x40));
        NetworkService_appendBuffer
                  ((char **)((int)this + 0x58),(int *)((int)this + 0x5c),data,
                   (uint)(pcVar5 + (9 - (int)pcVar1)));
        iVar4 = NetworkService_flushSendBuffer(this);
        *(undefined4 *)((int)this + 0x70) = 3;
        goto LAB_012f13e8;
      }
      if (iVar4 == 3) {
        iVar4 = NetworkService_pollSocketReady(this);
        if (iVar4 == 2) {
LAB_012f1247:
          NetworkService_closeSocket(this,true);
          NetworkService_setConnectionState(this,7);
          iVar4 = NetworkService_postConnectionError(this,7);
          ExceptionList = local_c;
          return iVar4;
        }
        NetworkService_flushSendBuffer(this);
        iVar4 = NetworkService_readSocket(this);
        if (*(int *)((int)this + 0x54) < 8) {
          if (iVar4 != -1) goto LAB_012f13e8;
          goto LAB_012f1247;
        }
        cVar2 = *(char *)(*(int *)((int)this + 0x50) + 1);
        *(undefined4 *)((int)this + 0x54) = 0;
        if (cVar2 != 'Z') goto LAB_012f1247;
        iVar3 = *(int *)((int)this + 0x68);
        *(undefined4 *)((int)this + 0x68) = 5;
        if (*(void **)((int)this + 0x60) != (void *)0x0) {
          NetworkService_appendBuffer
                    ((char **)((int)this + 0x58),(int *)((int)this + 0x5c),
                     *(void **)((int)this + 0x60),*(uint *)((int)this + 100));
                    /* WARNING: Subroutine does not return */
          _free(*(void **)((int)this + 0x60));
        }
        *(undefined4 *)((int)this + 100) = 0;
        iVar4 = 0;
        if (iVar3 == 5) goto LAB_012f13e8;
        NetworkCommand_RequestData_ctor(local_14);
        local_4 = 1;
        NetworkError_setCode(local_14,0x9f3);
        goto LAB_012f1302;
      }
    }
    iVar4 = FUN_012f5a60("false","..\\common\\networking\\NetworkService.cpp",0x30b);
  }
LAB_012f13e8:
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)iVar4 >> 8),1);
}

