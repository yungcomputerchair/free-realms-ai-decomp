// addr: 0x012f3d20
// name: StdFileBuf_overflow
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: int StdFileBuf_overflow(void * this, int ch) */

int __thiscall StdFileBuf_overflow(void *this,int ch)

{
  uint uVar1;
  int *piVar2;
  char *pcVar3;
  void *pvVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  undefined4 *******pppppppuVar8;
  undefined4 *******pppppppuVar9;
  size_t sVar10;
  char cVar11;
  undefined4 *******pppppppuVar12;
  size_t count;
  char local_3c;
  undefined1 local_3b [3];
  void *local_38;
  int local_34;
  char *local_30 [2];
  undefined4 ******local_28;
  undefined4 local_24;
  undefined1 local_20;
  uint local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Implements a file-buffer overflow/put-character path: flushes through a
                       codecvt-style converter to FILE with fwrite/fputc, updates buffer pointers,
                       and returns -1 on failure. Evidence is use of _fwrite, _fputc, conversion
                       virtual call, and EOF handling for ch == -1. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01674368;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_3c;
  uVar6 = DAT_01b839d8 ^ (uint)&stack0xffffffb4;
  ExceptionList = &local_c;
  if (ch == -1) {
    ch = 0;
  }
  else {
    uVar1 = **(uint **)((int)this + 0x24);
    cVar11 = (char)ch;
    if ((uVar1 == 0) || (piVar2 = *(int **)((int)this + 0x34), *piVar2 + uVar1 <= uVar1)) {
      if (*(void **)((int)this + 0x4c) != (void *)0x0) {
        local_38 = this;
        if (*(int *)((int)this + 0x3c) != 0) {
          local_14 = 0xf;
          local_28 = (undefined4 *******)0x0;
          _local_3c = CONCAT31(local_3b,cVar11);
          local_24 = 0;
          local_18 = 8;
          local_20 = 0;
          local_4 = 0;
          do {
            do {
              if (local_14 < 0x10) {
                pppppppuVar12 = &local_28;
LAB_012f3e15:
                pppppppuVar9 = (undefined4 *******)local_28;
                if (local_14 < 0x10) {
                  pppppppuVar9 = &local_28;
                }
                if (pppppppuVar12 < pppppppuVar9) goto LAB_012f3e35;
                pppppppuVar9 = (undefined4 *******)local_28;
                if (local_14 < 0x10) {
                  pppppppuVar9 = &local_28;
                }
                if ((undefined4 *******)((int)pppppppuVar9 + local_18) < pppppppuVar12)
                goto LAB_012f3e35;
              }
              else {
                pppppppuVar12 = (undefined4 *******)local_28;
                if ((undefined4 *******)local_28 != (undefined4 *******)0x0) goto LAB_012f3e15;
LAB_012f3e35:
                FUN_00d83c2d(uVar6);
              }
              if (&stack0x00000000 != (undefined1 *)0x2a) {
                pppppppuVar9 = (undefined4 *******)local_28;
                if (local_14 < 0x10) {
                  pppppppuVar9 = &local_28;
                }
                if ((undefined4 *******)((int)pppppppuVar9 + local_18) <= pppppppuVar12) {
                  FUN_00d83c2d(uVar6);
                }
              }
              uVar1 = local_18;
              if (local_14 < 0x10) {
                pppppppuVar9 = &local_28;
LAB_012f3e82:
                pppppppuVar8 = (undefined4 *******)local_28;
                if (local_14 < 0x10) {
                  pppppppuVar8 = &local_28;
                }
                if (pppppppuVar9 < pppppppuVar8) goto LAB_012f3ea2;
                pppppppuVar8 = (undefined4 *******)local_28;
                if (local_14 < 0x10) {
                  pppppppuVar8 = &local_28;
                }
                if ((undefined4 *******)((int)pppppppuVar8 + local_18) < pppppppuVar9)
                goto LAB_012f3ea2;
              }
              else {
                pppppppuVar9 = (undefined4 *******)local_28;
                if ((undefined4 *******)local_28 != (undefined4 *******)0x0) goto LAB_012f3e82;
LAB_012f3ea2:
                FUN_00d83c2d();
              }
              if (&stack0x00000000 != (undefined1 *)0x2a) {
                pppppppuVar8 = (undefined4 *******)local_28;
                if (local_14 < 0x10) {
                  pppppppuVar8 = &local_28;
                }
                if ((undefined4 *******)((int)pppppppuVar8 + local_18) <= pppppppuVar9) {
                  FUN_00d83c2d();
                }
              }
              pvVar4 = local_38;
              iVar7 = (**(code **)(**(int **)((int)local_38 + 0x3c) + 0x14))
                                ((int)local_38 + 0x44,&local_3c,local_3b,local_30,pppppppuVar9,
                                 (int)pppppppuVar12 + uVar1,&local_34);
              if (iVar7 < 0) goto LAB_012f40bb;
              if (1 < iVar7) {
                if (iVar7 == 3) {
                  bVar5 = PropertyString_containsChar
                                    ((char)_local_3c,*(undefined4 *)((int)pvVar4 + 0x4c));
                  if (!bVar5) {
                    ch = -1;
                  }
                  local_4 = 0xffffffff;
                  FUN_0041f1d7();
                  ExceptionList = local_c;
                  return ch;
                }
                goto LAB_012f40bb;
              }
              if (local_14 < 0x10) {
                pppppppuVar12 = &local_28;
LAB_012f3f22:
                pppppppuVar9 = (undefined4 *******)local_28;
                if (local_14 < 0x10) {
                  pppppppuVar9 = &local_28;
                }
                if (pppppppuVar12 < pppppppuVar9) goto LAB_012f3f46;
                pppppppuVar9 = (undefined4 *******)local_28;
                if (local_14 < 0x10) {
                  pppppppuVar9 = &local_28;
                }
                if ((undefined4 *******)((int)pppppppuVar9 + local_18) < pppppppuVar12)
                goto LAB_012f3f46;
              }
              else {
                pppppppuVar12 = (undefined4 *******)local_28;
                if ((undefined4 *******)local_28 != (undefined4 *******)0x0) goto LAB_012f3f22;
LAB_012f3f46:
                FUN_00d83c2d();
              }
              if (&stack0x00000000 != (undefined1 *)0x2a) {
                pppppppuVar9 = (undefined4 *******)local_28;
                if (local_14 < 0x10) {
                  pppppppuVar9 = &local_28;
                }
                if ((undefined4 *******)((int)pppppppuVar9 + local_18) <= pppppppuVar12) {
                  FUN_00d83c2d();
                }
              }
              count = local_34 - (int)pppppppuVar12;
              if (count != 0) {
                if (local_14 < 0x10) {
                  pppppppuVar12 = &local_28;
LAB_012f3f9d:
                  pppppppuVar9 = (undefined4 *******)local_28;
                  if (local_14 < 0x10) {
                    pppppppuVar9 = &local_28;
                  }
                  if (pppppppuVar12 < pppppppuVar9) goto LAB_012f3fbd;
                  pppppppuVar9 = (undefined4 *******)local_28;
                  if (local_14 < 0x10) {
                    pppppppuVar9 = &local_28;
                  }
                  if ((undefined4 *******)((int)pppppppuVar9 + local_18) < pppppppuVar12)
                  goto LAB_012f3fbd;
                }
                else {
                  pppppppuVar12 = (undefined4 *******)local_28;
                  if ((undefined4 *******)local_28 != (undefined4 *******)0x0) goto LAB_012f3f9d;
LAB_012f3fbd:
                  FUN_00d83c2d();
                }
                if (&stack0x00000000 != (undefined1 *)0x2a) {
                  pppppppuVar9 = (undefined4 *******)local_28;
                  if (local_14 < 0x10) {
                    pppppppuVar9 = &local_28;
                  }
                  if ((undefined4 *******)((int)pppppppuVar9 + local_18) <= pppppppuVar12) {
                    FUN_00d83c2d();
                  }
                }
                sVar10 = _fwrite(pppppppuVar12,1,count,*(void **)((int)local_38 + 0x4c));
                if (count != sVar10) goto LAB_012f40bb;
              }
              *(undefined1 *)((int)local_38 + 0x41) = 1;
              if (local_30[0] != &local_3c) {
                local_4 = 0xffffffff;
                FUN_0041f1d7();
                ExceptionList = local_c;
                return ch;
              }
            } while (count != 0);
            if (0x1f < local_18) {
LAB_012f40bb:
              local_4 = 0xffffffff;
              FUN_0041f1d7();
              goto LAB_012f40cc;
            }
            FUN_01270140(8,0);
          } while( true );
        }
        iVar7 = _fputc((int)cVar11,*(void **)((int)this + 0x4c));
        if (iVar7 != -1) {
          ExceptionList = local_c;
          return ch;
        }
      }
LAB_012f40cc:
      ch = -1;
    }
    else {
      *piVar2 = *piVar2 + -1;
      pcVar3 = (char *)**(int **)((int)this + 0x24);
      **(int **)((int)this + 0x24) = (int)(pcVar3 + 1);
      *pcVar3 = cVar11;
    }
  }
  ExceptionList = local_c;
  return ch;
}

