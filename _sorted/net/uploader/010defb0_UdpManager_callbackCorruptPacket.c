// addr: 0x010defb0
// name: UdpManager_callbackCorruptPacket
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UdpManager_callbackCorruptPacket(void * this, void * connection, void *
   data, uint len_, uint reason_) */

void __thiscall
UdpManager_callbackCorruptPacket(void *this,void *connection,void *data,uint len_,uint reason_)

{
  void *pvVar1;
  int *piVar2;
  
                    /* If callbacks are asynchronous, allocates event type 5 with the corrupt reason
                       and queues it; otherwise directly invokes the corrupt-packet callback. */
  if (*(char *)((int)this + 0x17c) != '\0') {
    pvVar1 = UdpManager_AllocCallbackEvent(this);
    piVar2 = (int *)UdpLibrary_PooledLogicalPacket_acquire(data,len_,0,0);
    FUN_010dbdc0(5,connection,piVar2,0);
    *(uint *)((int)pvVar1 + 0xc) = reason_;
    (**(code **)(*piVar2 + 4))();
    FUN_010ddff0(pvVar1);
    return;
  }
  FUN_010e2960(data,len_,reason_);
  return;
}

