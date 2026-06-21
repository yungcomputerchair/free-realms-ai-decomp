// addr: 0x012f0ef0
// name: NetworkService_updateConnecting
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int NetworkService_updateConnecting(void * this, int timeoutMs_) */

int __thiscall NetworkService_updateConnecting(void *this,int timeoutMs_)

{
  void *_Src;
  size_t _Size;
  uint uVar1;
  int iVar2;
  uint extraout_EAX;
  undefined3 uVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  void *pvVar3;
  undefined3 extraout_var_01;
  int unaff_EDI;
  bool bVar5;
  uint *puStack_34c;
  undefined4 uStack_348;
  undefined1 auStack_32c [12];
  uint local_320;
  uint local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined1 auStack_230 [28];
  undefined4 local_214;
  undefined4 local_210;
  undefined1 auStack_134 [36];
  undefined4 local_110;
  undefined4 local_10c;
  void *pvStack_20;
  undefined4 uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Polls a nonblocking connect attempt, handles socket success/error,
                       transitions to proxy/gateway/connected states, flushes pending data on
                       success, and posts connection errors on failure. Evidence:
                       select/getsockopt-like ordinals, state changes to 2/5/6/7, and calls
                       postConnectionError/closeSocket. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01673f3b;
  local_c = ExceptionList;
  uStack_348 = DAT_01b839d8 ^ (uint)&stack0xfffffcbc;
  ExceptionList = &local_c;
  local_314 = *(undefined4 *)((int)this + 0x44);
  local_320 = (uint)timeoutMs_ / 1000;
  local_31c = (uint)timeoutMs_ % 1000;
  puStack_34c = &local_320;
  local_214 = 1;
  local_110 = 1;
  local_318 = 1;
  local_210 = local_314;
  local_10c = local_314;
  uVar1 = Ordinal_18(0,&local_214,&local_110,&local_318);
  if (uVar1 == 0xffffffff) goto LAB_012f0ffc;
  iVar2 = Ordinal_151(*(undefined4 *)((int)this + 0x44),auStack_32c);
  if (iVar2 == 0) {
    iVar2 = Ordinal_151(*(undefined4 *)((int)this + 0x44),auStack_230);
    *(bool *)((int)this + 0x6c) = iVar2 != 0;
    iVar2 = Ordinal_151(*(undefined4 *)((int)this + 0x44),auStack_134);
    uVar4 = (undefined3)((uint)iVar2 >> 8);
    *(bool *)((int)this + 0x6d) = iVar2 != 0;
    if ((*(char *)((int)this + 0x6c) == '\0') && (iVar2 == 0)) goto LAB_012f1161;
    iVar2 = Ordinal_7(*(undefined4 *)((int)this + 0x44),0xffff,0x1007,&stack0xfffffcbc,
                      &stack0xfffffcc0);
    if (-1 < iVar2) {
      if (DAT_01cbd978 == '\x01') {
        NetworkService_setConnectionState(this,6);
        *(undefined4 *)((int)this + 0x70) = 1;
        uVar4 = extraout_var;
LAB_012f1161:
        ExceptionList = pvStack_20;
        return CONCAT31(uVar4,1);
      }
      if (*(char *)((int)this + 0x4d) == '\x01') {
        NetworkService_setConnectionState(this,2);
        uVar4 = extraout_var_00;
        goto LAB_012f1161;
      }
      _Src = *(void **)((int)this + 0x60);
      uVar4 = 0;
      bVar5 = *(int *)((int)this + 0x68) != 5;
      *(undefined4 *)((int)this + 0x68) = 5;
      uStack_348 = CONCAT13(bVar5,(undefined3)uStack_348);
      if (_Src == (void *)0x0) {
        *(undefined4 *)((int)this + 100) = 0;
        if (bVar5) {
          NetworkCommand_RequestData_ctor(&stack0xfffffcc4);
          uStack_18 = 0;
          NetworkError_setCode(&stack0xfffffcc4,0x9f3);
          NetworkService_queueCommand(this,&stack0xfffffcc4);
          uStack_18 = 0xffffffff;
          NetworkCommand_RequestData_dtor(&stack0xfffffcc4);
          uVar4 = extraout_var_01;
        }
        goto LAB_012f1161;
      }
      _Size = *(size_t *)((int)this + 100);
      if (*(int *)((int)this + 0x58) == 0) {
        pvVar3 = _malloc(*(int *)((int)this + 0x5c) + _Size);
        *(void **)((int)this + 0x58) = pvVar3;
      }
      else {
        iVar2 = FUN_00d8a744(*(int *)((int)this + 0x58));
        *(int *)((int)this + 0x58) = iVar2;
        if (iVar2 == 0) goto LAB_012f110b;
      }
      _memcpy((void *)(*(int *)((int)this + 0x58) + *(int *)((int)this + 0x5c)),_Src,_Size);
      *(int *)((int)this + 0x5c) = *(int *)((int)this + 0x5c) + _Size;
LAB_012f110b:
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 0x60));
    }
LAB_012f0fd4:
    if (unaff_EDI == 0x274d) {
      iVar2 = 6;
    }
    else {
LAB_012f0fe4:
      iVar2 = 2;
    }
  }
  else {
    puStack_34c = (uint *)0x0;
    uStack_348 = 4;
    iVar2 = Ordinal_7(*(undefined4 *)((int)this + 0x44),0xffff,0x1007,&puStack_34c,&uStack_348);
    if (iVar2 < 0) goto LAB_012f0fd4;
    uVar1 = 0;
    if (unaff_EDI == 0) goto LAB_012f0ffc;
    if (unaff_EDI != 0x274d) goto LAB_012f0fe4;
    iVar2 = 6;
  }
  NetworkService_postConnectionError(this,iVar2);
  NetworkService_closeSocket(this,true);
  NetworkService_setConnectionState(this,7);
  uVar1 = extraout_EAX;
LAB_012f0ffc:
  ExceptionList = pvStack_20;
  return uVar1 & 0xffffff00;
}

