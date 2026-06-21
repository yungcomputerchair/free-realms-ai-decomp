// addr: 0x010e06d0
// name: UdpManager_CallbackRoutePacket
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UdpManager_CallbackRoutePacket(void * connection, int routeId_, void *
   data, int length_) */

void __thiscall
UdpManager_CallbackRoutePacket(void *this,void *connection,int routeId_,void *data,int length_)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  void *pvVar6;
  
                    /* Routes a cooked UDP payload either by queuing a callback event with a copied
                       logical packet or by invoking the route handler inline when callbacks are
                       disabled. */
  if (*(char *)((int)this + 0x17c) != '\0') {
    pvVar4 = UdpManager_AllocCallbackEvent(this);
    iVar5 = *(int *)((int)this + 0x548);
    FUN_00fc45f0();
    iVar1 = *(int *)(iVar5 + 0x29c);
    iVar2 = *(int *)(iVar5 + 0x298);
    iVar3 = *(int *)(iVar5 + 0x290);
    if (iVar5 != -0x2a8) {
      FUN_00fc4610();
    }
    if (iVar1 + iVar2 + iVar3 < *(int *)((int)this + 0x6c) * *(int *)((int)this + 100)) {
      iVar5 = UdpManager_AllocPooledLogicalPacketCopy((int)this + 0x548,&routeId_,&data);
    }
    else {
      pvVar6 = Mem_Alloc(0x18);
      if (pvVar6 == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = RefArray_ctor_copyData(routeId_,data);
      }
    }
    FUN_010dbdc0(1,connection,0,iVar5);
    LOCK();
    iVar1 = *(int *)(iVar5 + 0x14) + -1;
    *(int *)(iVar5 + 0x14) = iVar1;
    UNLOCK();
    if (iVar1 == 0) {
      (**(code **)(*(int *)(iVar5 + 0x10) + 4))();
    }
    FUN_010ddff0(pvVar4);
    return;
  }
  UdpConnection_InvokeRouteHandlerInline(routeId_,data);
  return;
}

