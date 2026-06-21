// addr: 0x00b1ec10
// name: GuildDataFullPacket_applyOrInsertGuild
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildDataFullPacket_applyOrInsertGuild(void * guildDb, void * buffer, int
   length_) */

void __thiscall
GuildDataFullPacket_applyOrInsertGuild(void *this,void *guildDb,void *buffer,int length_)

{
  int *piVar1;
  void *pvVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *_Memory;
  void *local_40;
  void *local_3c;
  void *local_38;
  void *local_34;
  char local_30;
  undefined1 local_2f;
  undefined1 local_2c [16];
  uint local_1c;
  uint local_18;
  undefined4 *local_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Constructs/deserializes a GuildDataFullPacket entry, removes any existing
                       guild entry with the same identifier, inserts the new node into hash/list
                       storage, and notifies listeners. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015d1e03;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuildDataFullPacket_ctor(local_2c);
  local_4 = 0;
  pvVar2 = Mem_Alloc(0x280);
  local_4._0_1_ = 1;
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)FUN_0106e6f0();
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (guildDb != (void *)0x0) {
    local_40 = guildDb;
    local_38 = guildDb;
    local_34 = (void *)((int)guildDb + (int)buffer);
    local_3c = buffer;
    local_30 = '\0';
    local_2f = 0;
    local_14 = puVar3;
    GuildDataFullPacket_deserializeGuildIdentifier(local_2c,&local_40);
    if ((local_30 == '\0') && (local_34 == local_38 || (int)local_34 - (int)local_38 < 0)) {
      for (_Memory = *(undefined4 **)((int)this + ((local_18 ^ local_1c) & 3) * 4 + 0xa0);
          _Memory != (undefined4 *)0x0; _Memory = (undefined4 *)*_Memory) {
        if (_Memory[1] == (local_18 ^ local_1c)) {
          do {
            if ((_Memory[8] == local_1c) && (_Memory[9] == local_18)) {
              if (_Memory == *(undefined4 **)(*(int *)((int)this + 600) + 600)) {
                FUN_00cb5520();
              }
              FUN_00b184b0();
              FUN_0106e4e0();
                    /* WARNING: Subroutine does not return */
              _free(_Memory);
            }
            piVar1 = _Memory + 1;
            _Memory = (undefined4 *)*_Memory;
            while( true ) {
              if (_Memory == (undefined4 *)0x0) goto LAB_00b1ed62;
              if (_Memory[1] == *piVar1) break;
              _Memory = (undefined4 *)*_Memory;
            }
          } while( true );
        }
      }
LAB_00b1ed62:
      puVar3[2] = *(undefined4 *)((int)this + 0x98);
      if (*(int *)((int)this + 0x98) == 0) {
        *(undefined4 **)((int)this + 0x94) = puVar3;
      }
      else {
        *(undefined4 **)(*(int *)((int)this + 0x98) + 0xc) = puVar3;
      }
      *(undefined4 **)((int)this + 0x98) = puVar3;
      puVar3[1] = local_18 ^ local_1c;
      uVar4 = (local_18 ^ local_1c) & 3;
      *puVar3 = *(undefined4 *)((int)this + uVar4 * 4 + 0xa0);
      *(undefined4 **)((int)this + uVar4 * 4 + 0xa0) = puVar3;
      *(int *)((int)this + 0x9c) = *(int *)((int)this + 0x9c) + 1;
      FUN_00b1d030();
      if (*(int *)(*(int *)((int)this + 600) + 600) == 0) {
        FUN_00cb5520();
        FUN_00cb63d0();
      }
    }
  }
  ExceptionList = local_c;
  return;
}

