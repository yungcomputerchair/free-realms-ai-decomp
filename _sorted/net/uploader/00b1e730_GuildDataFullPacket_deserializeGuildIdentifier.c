// addr: 0x00b1e730
// name: GuildDataFullPacket_deserializeGuildIdentifier
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildDataFullPacket_deserializeGuildIdentifier(void * this, void *
   reader) */

void __thiscall GuildDataFullPacket_deserializeGuildIdentifier(void *this,void *reader)

{
  undefined4 *puVar1;
  
                    /* Reads two 32-bit words from a bounded packet buffer into offsets 0x10 and
                       0x14, marking the reader failed on underflow. The class is inferred from
                       nearby GuildDataFullPacket construction and caller context. */
  FUN_00b1a810(reader);
  puVar1 = *(undefined4 **)((int)reader + 8);
  if (*(undefined4 **)((int)reader + 0xc) < puVar1 + 2) {
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
    FUN_00b1e160(reader);
    return;
  }
  *(undefined4 *)((int)this + 0x10) = *puVar1;
  *(undefined4 *)((int)this + 0x14) = puVar1[1];
  *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 8;
  FUN_00b1e160(reader);
  return;
}

