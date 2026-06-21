// addr: 0x0152a5b0
// name: UChatCommand_OnReceiveFriendLogin_deserialize
// subsystem: common/networking/uchat_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int UChatCommand_OnReceiveFriendLogin_deserialize(void * this, void * stream)
    */

int __thiscall UChatCommand_OnReceiveFriendLogin_deserialize(void *this,void *stream)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  
                    /* Deserializes an OnReceiveFriendLogin command by reading the inherited
                       UChatCommand fields only. */
  pvVar1 = stream;
  uVar2 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if ((char)uVar2 != '\0') {
    uVar2 = FUN_013bcf60(pvVar1);
    if ((char)uVar2 != '\0') {
      iVar3 = (**(code **)(*(int *)this + 0x14))(pvVar1);
      return iVar3;
    }
  }
  return uVar2 & 0xffffff00;
}

