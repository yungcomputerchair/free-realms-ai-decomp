// addr: 0x014c01f0
// name: FUN_014c01f0
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool AccountCommand_deserializeAccountData(void * this, void * stream) */

bool __thiscall AccountCommand_deserializeAccountData(void *this,void *stream)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  void *local_4;
  
                    /* Deserializes an account command containing common command fields, a
                       string/list field, nested component data, two integers, and a boolean flag.
                        */
  local_4 = this;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&local_4);
  if (cVar1 != '\0') {
    bVar2 = LobbyCommand_deserialize(this,stream);
    if (bVar2) {
      bVar2 = Deserializer_readString(stream,(void *)((int)this + 8));
      if (bVar2) {
        cVar1 = FUN_01302e20(stream,(int)this + 0x24);
        if (cVar1 != '\0') {
          bVar2 = Deserializer_readInteger(stream,(int *)((int)this + 0x28));
          if (bVar2) {
            bVar2 = Deserializer_readInteger(stream,(int *)((int)this + 0x2c));
            if (bVar2) {
              bVar2 = Deserializer_readInteger(stream,(int *)&local_4);
              if (bVar2) {
                *(bool *)((int)this + 0x30) = local_4 != (void *)0x0;
                uVar3 = (**(code **)(*(int *)this + 0x14))(stream);
                return (bool)uVar3;
              }
            }
          }
        }
      }
    }
  }
  return false;
}

