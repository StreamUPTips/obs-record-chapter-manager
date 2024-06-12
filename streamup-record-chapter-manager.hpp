#pragma once

#ifndef STREAMUP_RECORD_CHAPTER_MANAGER_HPP
#define STREAMUP_RECORD_CHAPTER_MANAGER_HPP

#include <obs.h>
#include <obs-frontend-api.h>
#include <obs-source.h>

obs_data_t *SaveLoadSettingsCallback(obs_data_t *save_data, bool saving);

#endif
