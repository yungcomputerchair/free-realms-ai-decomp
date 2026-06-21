// addr: 0x012f1400
// name: NetworkService_updateSocks5Connection
// subsystem: common/networking
// source (binary assert): common/networking/NetworkService.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int NetworkService_updateSocks5Connection(void * this) */

int __fastcall NetworkService_updateSocks5Connection(void *this)

{
  char *pcVar1;
  size_t _Size;
  char cVar2;
  undefined1 *puVar3;
  void *_Src;
  uint extraout_EAX;
  uint uVar4;
  char *pcVar5;
  size_t sVar6;
  int iVar7;
  size_t local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Drives a SOCKS5-style proxy handshake state machine, sending
                       greeting/connect/auth packets and mapping failures to NetworkService error
                       codes. Evidence: NetworkService.cpp false assert, socket send/receive
                       helpers, states that emit byte sequences beginning with 5 and optional
                       username/password globals. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01673fa0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_01cbd978 == '\0') {
    iVar7 = *(int *)((int)this + 0x68);
    *(undefined4 *)((int)this + 0x68) = 5;
    if (*(void **)((int)this + 0x60) != (void *)0x0) {
      NetworkService_appendBuffer
                ((char **)((int)this + 0x58),(int *)((int)this + 0x5c),*(void **)((int)this + 0x60),
                 *(uint *)((int)this + 100));
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 0x60));
    }
    *(undefined4 *)((int)this + 100) = 0;
    uVar4 = 0;
    if (iVar7 == 5) goto switchD_012f1755_default;
    NetworkCommand_RequestData_ctor(local_14);
    local_4 = 0;
    NetworkError_setCode(local_14,0x9f3);
LAB_012f17c8:
    NetworkService_queueCommand(this,local_14);
    local_4 = 0xffffffff;
    NetworkCommand_RequestData_dtor(local_14);
    uVar4 = extraout_EAX;
    goto switchD_012f1755_default;
  }
  switch(*(undefined4 *)((int)this + 0x70)) {
  case 1:
  case 4:
    puVar3 = _malloc(4);
    *puVar3 = 5;
    puVar3[1] = 2;
    puVar3[2] = 0;
    puVar3[3] = 2;
    NetworkService_appendBuffer((char **)((int)this + 0x58),(int *)((int)this + 0x5c),puVar3,4);
    uVar4 = NetworkService_flushSendBuffer(this);
    *(undefined4 *)((int)this + 0x70) = 5;
    break;
  case 2:
    uVar4 = Ordinal_9(*(undefined2 *)((int)this + 0x40));
    local_14[0] = uVar4 & 0xffff;
    if (*(uint *)((int)this + 0x38) < 0x10) {
      pcVar5 = (char *)((int)this + 0x24);
    }
    else {
      pcVar5 = *(char **)((int)this + 0x24);
    }
    pcVar1 = pcVar5 + 1;
    do {
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    sVar6 = (int)pcVar5 - (int)pcVar1;
    puVar3 = _malloc(sVar6 + 7);
    *puVar3 = 5;
    puVar3[1] = 1;
    puVar3[2] = 0;
    puVar3[3] = 3;
    puVar3[4] = (char)sVar6;
    if (*(uint *)((int)this + 0x38) < 0x10) {
      _Src = (void *)((int)this + 0x24);
    }
    else {
      _Src = *(void **)((int)this + 0x24);
    }
    _memcpy(puVar3 + 5,_Src,sVar6);
    *(undefined2 *)(puVar3 + sVar6 + 5) = (undefined2)local_14[0];
    NetworkService_appendBuffer
              ((char **)((int)this + 0x58),(int *)((int)this + 0x5c),puVar3,sVar6 + 7);
    uVar4 = NetworkService_flushSendBuffer(this);
    *(undefined4 *)((int)this + 0x70) = 3;
    break;
  case 3:
    NetworkService_flushSendBuffer(this);
    uVar4 = NetworkService_readSocket(this);
    if (*(int *)((int)this + 0x54) < 8) goto LAB_012f159f;
    uVar4 = (uint)*(byte *)(*(int *)((int)this + 0x50) + 1);
    *(undefined4 *)((int)this + 0x54) = 0;
    switch(uVar4) {
    case 0:
      iVar7 = *(int *)((int)this + 0x68);
      *(undefined4 *)((int)this + 0x68) = 5;
      if (*(void **)((int)this + 0x60) != (void *)0x0) {
        NetworkService_appendBuffer
                  ((char **)((int)this + 0x58),(int *)((int)this + 0x5c),
                   *(void **)((int)this + 0x60),*(uint *)((int)this + 100));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 0x60));
      }
      *(undefined4 *)((int)this + 100) = 0;
      uVar4 = 0;
      if (iVar7 == 5) goto switchD_012f1755_default;
      NetworkCommand_RequestData_ctor(local_14);
      local_4 = 1;
      NetworkError_setCode(local_14,0x9f3);
      goto LAB_012f17c8;
    case 1:
    case 7:
    case 8:
      goto switchD_012f1755_caseD_1;
    case 2:
      NetworkService_closeSocket(this,true);
      NetworkService_setConnectionState(this,7);
      iVar7 = 10;
      break;
    case 3:
    case 4:
    case 5:
    case 6:
      NetworkService_closeSocket(this,true);
      NetworkService_setConnectionState(this,7);
      iVar7 = 6;
      break;
    default:
      goto switchD_012f1755_default;
    }
    goto LAB_012f1517;
  case 5:
    iVar7 = NetworkService_pollSocketReady(this);
    if (iVar7 != 2) {
      NetworkService_flushSendBuffer(this);
      uVar4 = NetworkService_readSocket(this);
      if (1 < *(int *)((int)this + 0x54)) {
        cVar2 = *(char *)(*(int *)((int)this + 0x50) + 1);
        *(undefined4 *)((int)this + 0x54) = 0;
        if (cVar2 == '\0') {
          *(undefined4 *)((int)this + 0x70) = 2;
          uVar4 = 0;
        }
        else {
          if (cVar2 != '\x02') {
            NetworkService_closeSocket(this,true);
            NetworkService_setConnectionState(this,7);
            iVar7 = NetworkService_postConnectionError(this,8);
            ExceptionList = local_c;
            return iVar7;
          }
          *(undefined4 *)((int)this + 0x70) = 6;
          uVar4 = 0;
        }
        break;
      }
      goto LAB_012f159f;
    }
    goto LAB_012f1505;
  case 6:
    pcVar5 = DAT_01cbd988;
    do {
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    sVar6 = (int)pcVar5 - (int)(DAT_01cbd988 + 1);
    pcVar5 = DAT_01cbd98c;
    do {
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    local_14[0] = (int)pcVar5 - (int)(DAT_01cbd98c + 1);
    _Size = local_14[0] + 3 + sVar6;
    puVar3 = _malloc(_Size);
    *puVar3 = 1;
    puVar3[1] = (char)sVar6;
    _memcpy(puVar3 + 2,DAT_01cbd988,sVar6);
    puVar3[sVar6 + 2] = (char)local_14[0];
    _memcpy(puVar3 + sVar6 + 3,DAT_01cbd98c,local_14[0]);
    NetworkService_appendBuffer((char **)((int)this + 0x58),(int *)((int)this + 0x5c),puVar3,_Size);
    uVar4 = NetworkService_flushSendBuffer(this);
    *(undefined4 *)((int)this + 0x70) = 7;
    break;
  case 7:
    NetworkService_flushSendBuffer(this);
    uVar4 = NetworkService_readSocket(this);
    if (1 < *(int *)((int)this + 0x54)) {
      cVar2 = *(char *)(*(int *)((int)this + 0x50) + 1);
      uVar4 = CONCAT31((int3)(uVar4 >> 8),cVar2);
      *(undefined4 *)((int)this + 0x54) = 0;
      if (cVar2 != '\0') {
        NetworkService_closeSocket(this,true);
        NetworkService_setConnectionState(this,7);
        iVar7 = 9;
        goto LAB_012f1517;
      }
      *(undefined4 *)((int)this + 0x70) = 2;
      break;
    }
LAB_012f159f:
    if (uVar4 != 0xffffffff) break;
switchD_012f1755_caseD_1:
LAB_012f1505:
    NetworkService_closeSocket(this,true);
    NetworkService_setConnectionState(this,7);
    iVar7 = 7;
LAB_012f1517:
    iVar7 = NetworkService_postConnectionError(this,iVar7);
    ExceptionList = local_c;
    return iVar7;
  default:
    uVar4 = FUN_012f5a60("false","..\\common\\networking\\NetworkService.cpp",0x3af,
                         DAT_01b839d8 ^ (uint)&stack0xffffffd8);
  }
switchD_012f1755_default:
  ExceptionList = local_c;
  return CONCAT31((int3)(uVar4 >> 8),1);
}

