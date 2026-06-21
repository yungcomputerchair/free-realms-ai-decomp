// addr: 0x010e2210
// name: Soe_SetupEncryptDecrypt
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Soe_SetupEncryptDecrypt(void * connection) */

void __fastcall Soe_SetupEncryptDecrypt(void *connection)

{
  undefined1 extraout_AL;
  int iVar1;
  undefined1 *puVar2;
  uint size_;
  undefined4 *puVar3;
  undefined4 *local_c;
  int local_8;
  int local_4;
  
                    /* Configures SOE encrypt/decrypt function pointers for two channels based on
                       selected crypto modes and allocates random key material when mode 3 requires
                       it. */
  local_c = (undefined4 *)((int)connection + 0x18c);
  *(undefined4 *)((int)connection + 0x208) = 0;
  puVar3 = (undefined4 *)((int)connection + 0x48);
  local_8 = 2;
  do {
    switch(*local_c) {
    case 0:
      puVar3[-8] = &LAB_010e1f10;
      puVar2 = &LAB_010e1ef0;
      goto LAB_010e2377;
    case 1:
      puVar3[-8] = &LAB_010e1f70;
      puVar3[-7] = 0;
      *puVar3 = FUN_010e1f30;
      puVar3[1] = 0;
      puVar3[-6] = 0;
      puVar3[2] = 0;
      puVar3[-5] = 0;
      puVar3[3] = 0;
      *(int *)((int)connection + 0x208) =
           *(int *)((int)connection + 0x208) + *(int *)(*(int *)((int)connection + 0x94) + 0x170);
      break;
    case 2:
      puVar3[-8] = &LAB_010e1ff0;
      puVar3[-7] = 0;
      *puVar3 = &LAB_010e1fb0;
      puVar3[1] = 0;
      puVar3[-6] = 0;
      puVar3[2] = 0;
      puVar3[-5] = 0;
      puVar3[3] = 0;
      *(int *)((int)connection + 0x208) =
           *(int *)((int)connection + 0x208) + *(int *)(*(int *)((int)connection + 0x94) + 0x174);
      break;
    case 3:
      puVar3[-8] = &LAB_010e20a0;
      *puVar3 = FUN_010e2030;
      puVar3[-7] = 0;
      puVar3[1] = 0;
      puVar3[-6] = 0;
      puVar3[2] = 0;
      puVar3[-5] = 0;
      puVar3[3] = 0;
      if (*(int *)((int)connection + 0x204) == 0) {
        iVar1 = *(int *)(*(int *)((int)connection + 0x94) + 0x50) + 1;
        size_ = ((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2) * 4;
        puVar2 = Mem_Alloc(size_);
        local_4 = *(int *)((int)connection + 0x184);
        *(undefined1 **)((int)connection + 0x204) = puVar2;
        if (0 < (int)size_) {
          do {
            Soe_nextRandomSeed(&local_4);
            *puVar2 = extraout_AL;
            puVar2 = puVar2 + 1;
            size_ = size_ - 1;
          } while (size_ != 0);
        }
      }
      break;
    case 4:
      puVar3[-8] = &LAB_010e2190;
      puVar2 = &LAB_010e2110;
LAB_010e2377:
      *puVar3 = puVar2;
      puVar3[-7] = 0;
      puVar3[1] = 0;
      puVar3[-6] = 0;
      puVar3[2] = 0;
      puVar3[-5] = 0;
      puVar3[3] = 0;
    }
    local_c = local_c + 1;
    puVar3 = puVar3 + 4;
    local_8 = local_8 + -1;
    if (local_8 == 0) {
      return;
    }
  } while( true );
}

