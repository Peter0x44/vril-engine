/*
 * Copyright (C) 1996-2001 Id Software, Inc.
 * Copyright (C) 2002-2009 John Fitzgibbons and others
 * Copyright (C) 2010-2014 QuakeSpasm developers
 * Copyright (C) 2023 NZ:P Team
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 *
 */
// r_fog.h -- Fog header

// MARK: Global

void Fog_SetupFrame(bool is_world_geometry);
void Fog_Init(void);
void Fog_ParseWorldspawn(void);
void Fog_ParseServerMessage(void);
void Fog_EnableGFog(void);
void Fog_DisableGFog(void);
void Fog_SetColorForSkyS(void);
void Fog_SetColorForSkyE(void);

// MARK: Platform-specific

void Platform_Fog_Init(void);
void Platform_Fog_Disable(void);
void Platform_Fog_Enable(void);
void Platform_Fog_Set(bool is_world_geometry, float start, float end, float red, float green, float blue, float alpha);