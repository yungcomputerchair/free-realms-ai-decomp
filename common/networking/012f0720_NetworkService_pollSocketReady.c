// addr: 0x012f0720
// name: NetworkService_pollSocketReady
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int NetworkService_pollSocketReady(void * this) */

int __fastcall NetworkService_pollSocketReady(void *this)

{
  int iVar1;
  undefined4 *puStack_320;
  undefined1 *puStack_31c;
  undefined4 local_314;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_308;
  undefined1 auStack_224 [28];
  undefined4 local_208;
  undefined4 local_204;
  undefined1 auStack_128 [36];
  undefined4 local_104;
  undefined4 local_100;
  
                    /* Polls the service socket with select-like ordinals and records
                       readable/writable readiness flags at offsets 0x6c and 0x6d. Returns small
                       status codes for ready, timeout, or error. Evidence: socket handle at 0x44 is
                       inserted into fd-set-like locals and checked with Ordinal_18/151. */
  puStack_31c = (undefined1 *)&local_314;
  local_308 = *(undefined4 *)((int)this + 0x44);
  puStack_320 = &local_30c;
  local_314 = 0;
  local_310 = 0;
  local_208 = 1;
  local_104 = 1;
  local_30c = 1;
  local_204 = local_308;
  local_100 = local_308;
  iVar1 = Ordinal_18(0,&local_208,&local_104);
  if (iVar1 == 0) {
    return 3;
  }
  if (iVar1 != -1) {
    iVar1 = Ordinal_151(*(undefined4 *)((int)this + 0x44),&puStack_320);
    if (iVar1 == 0) {
      iVar1 = Ordinal_151(*(undefined4 *)((int)this + 0x44),auStack_224);
      *(bool *)((int)this + 0x6c) = iVar1 != 0;
      iVar1 = Ordinal_151(*(undefined4 *)((int)this + 0x44),auStack_128);
      *(bool *)((int)this + 0x6d) = iVar1 != 0;
      return 1;
    }
  }
  return 2;
}

