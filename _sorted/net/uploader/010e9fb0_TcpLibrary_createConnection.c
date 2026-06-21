// addr: 0x010e9fb0
// name: TcpLibrary_createConnection
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * TcpLibrary_createConnection(void * factory, int host_, int port_) */

void * __thiscall TcpLibrary_createConnection(void *this,void *factory,int host_,int port_)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  void *pvVar6;
  void *unaff_EBP;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Creates a platform TCP driver around a lower-level connection, then
                       constructs and returns a higher-level TCP connection object. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0164d1eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar4 = (int *)(**(code **)(*(int *)this + 0x30))
                            (factory,host_,DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  puVar5 = Mem_Alloc(0x1c);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)((int)this + 8) + 8);
    uVar2 = *(undefined4 *)(*(int *)((int)this + 8) + 0xc);
    puVar5[1] = 0;
    puVar5[6] = 0;
    *puVar5 = TcpLibrary::TcpConnectionPlatformDriver::vftable;
    puVar5[5] = 0xffffffff;
    puVar5[2] = piVar4;
    LOCK();
    piVar4[1] = piVar4[1] + 1;
    UNLOCK();
    puVar5[3] = uVar1;
    puVar5[4] = uVar2;
  }
  pvVar6 = Mem_Alloc(0x2108);
  local_c = (void *)0x0;
  if (pvVar6 == (void *)0x0) {
    pvVar6 = (void *)0x0;
  }
  else {
    pvVar6 = (void *)FUN_010e8e70(puVar5,**(undefined4 **)((int)this + 8),0,factory);
  }
  local_c = (void *)0xffffffff;
  if (piVar4 != (int *)0x0) {
    LOCK();
    iVar3 = piVar4[1] + -1;
    piVar4[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      (**(code **)(*piVar4 + 4))();
    }
  }
  ExceptionList = unaff_EBP;
  return pvVar6;
}

